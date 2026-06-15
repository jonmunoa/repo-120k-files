// fichero 44041 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44041;

Registro44041 crear_registro44041(int id) {
    Registro44041 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
