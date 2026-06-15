// fichero 47773 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47773;

Registro47773 crear_registro47773(int id) {
    Registro47773 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
