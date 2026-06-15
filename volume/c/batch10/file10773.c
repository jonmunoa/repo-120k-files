// fichero 10773 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10773;

Registro10773 crear_registro10773(int id) {
    Registro10773 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
