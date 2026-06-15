// fichero 49793 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49793;

Registro49793 crear_registro49793(int id) {
    Registro49793 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
