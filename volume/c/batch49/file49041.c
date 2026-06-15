// fichero 49041 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49041;

Registro49041 crear_registro49041(int id) {
    Registro49041 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
