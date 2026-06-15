// fichero 32817 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32817;

Registro32817 crear_registro32817(int id) {
    Registro32817 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
