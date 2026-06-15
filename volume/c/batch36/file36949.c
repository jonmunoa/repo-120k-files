// fichero 36949 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36949;

Registro36949 crear_registro36949(int id) {
    Registro36949 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
