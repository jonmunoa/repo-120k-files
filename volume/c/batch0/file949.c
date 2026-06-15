// fichero 949 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro949;

Registro949 crear_registro949(int id) {
    Registro949 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
