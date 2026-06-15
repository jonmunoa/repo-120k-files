// fichero 45773 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45773;

Registro45773 crear_registro45773(int id) {
    Registro45773 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
