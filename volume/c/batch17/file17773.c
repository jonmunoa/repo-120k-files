// fichero 17773 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17773;

Registro17773 crear_registro17773(int id) {
    Registro17773 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
