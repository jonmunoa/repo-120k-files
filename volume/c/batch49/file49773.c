// fichero 49773 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49773;

Registro49773 crear_registro49773(int id) {
    Registro49773 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
