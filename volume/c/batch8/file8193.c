// fichero 8193 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8193;

Registro8193 crear_registro8193(int id) {
    Registro8193 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
