// fichero 27949 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27949;

Registro27949 crear_registro27949(int id) {
    Registro27949 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
