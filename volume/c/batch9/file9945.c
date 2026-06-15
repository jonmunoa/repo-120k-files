// fichero 9945 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9945;

Registro9945 crear_registro9945(int id) {
    Registro9945 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
