// fichero 42553 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42553;

Registro42553 crear_registro42553(int id) {
    Registro42553 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
