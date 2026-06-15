// fichero 11209 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11209;

Registro11209 crear_registro11209(int id) {
    Registro11209 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
