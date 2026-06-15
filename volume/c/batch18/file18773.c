// fichero 18773 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18773;

Registro18773 crear_registro18773(int id) {
    Registro18773 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
