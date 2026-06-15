// fichero 26949 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26949;

Registro26949 crear_registro26949(int id) {
    Registro26949 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
