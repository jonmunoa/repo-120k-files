// fichero 34949 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34949;

Registro34949 crear_registro34949(int id) {
    Registro34949 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
