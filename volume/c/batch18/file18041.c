// fichero 18041 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18041;

Registro18041 crear_registro18041(int id) {
    Registro18041 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
