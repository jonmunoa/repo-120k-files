// fichero 44345 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44345;

Registro44345 crear_registro44345(int id) {
    Registro44345 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
