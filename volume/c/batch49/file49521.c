// fichero 49521 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49521;

Registro49521 crear_registro49521(int id) {
    Registro49521 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
