// fichero 35773 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35773;

Registro35773 crear_registro35773(int id) {
    Registro35773 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
