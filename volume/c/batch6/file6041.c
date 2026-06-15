// fichero 6041 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6041;

Registro6041 crear_registro6041(int id) {
    Registro6041 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
