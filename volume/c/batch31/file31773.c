// fichero 31773 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31773;

Registro31773 crear_registro31773(int id) {
    Registro31773 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
