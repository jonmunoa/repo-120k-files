// fichero 7773 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7773;

Registro7773 crear_registro7773(int id) {
    Registro7773 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
