// fichero 9773 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9773;

Registro9773 crear_registro9773(int id) {
    Registro9773 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
