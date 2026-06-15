// fichero 49949 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49949;

Registro49949 crear_registro49949(int id) {
    Registro49949 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
