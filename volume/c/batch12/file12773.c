// fichero 12773 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12773;

Registro12773 crear_registro12773(int id) {
    Registro12773 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
