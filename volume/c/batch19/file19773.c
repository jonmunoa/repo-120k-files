// fichero 19773 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19773;

Registro19773 crear_registro19773(int id) {
    Registro19773 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
