// fichero 29593 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29593;

Registro29593 crear_registro29593(int id) {
    Registro29593 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
