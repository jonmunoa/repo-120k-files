// fichero 29773 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29773;

Registro29773 crear_registro29773(int id) {
    Registro29773 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
