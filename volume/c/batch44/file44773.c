// fichero 44773 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44773;

Registro44773 crear_registro44773(int id) {
    Registro44773 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
