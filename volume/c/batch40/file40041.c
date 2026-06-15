// fichero 40041 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40041;

Registro40041 crear_registro40041(int id) {
    Registro40041 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
