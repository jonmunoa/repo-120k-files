// fichero 9521 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9521;

Registro9521 crear_registro9521(int id) {
    Registro9521 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
