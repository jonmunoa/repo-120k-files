// fichero 47153 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47153;

Registro47153 crear_registro47153(int id) {
    Registro47153 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
