// fichero 14773 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14773;

Registro14773 crear_registro14773(int id) {
    Registro14773 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
