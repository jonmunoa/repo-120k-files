// fichero 29949 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29949;

Registro29949 crear_registro29949(int id) {
    Registro29949 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
