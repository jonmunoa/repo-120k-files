// fichero 29193 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29193;

Registro29193 crear_registro29193(int id) {
    Registro29193 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
