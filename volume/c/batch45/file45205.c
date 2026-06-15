// fichero 45205 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45205;

Registro45205 crear_registro45205(int id) {
    Registro45205 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
