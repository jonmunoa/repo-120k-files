// fichero 9 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9;

Registro9 crear_registro9(int id) {
    Registro9 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
