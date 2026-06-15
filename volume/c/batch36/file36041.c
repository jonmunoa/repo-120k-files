// fichero 36041 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36041;

Registro36041 crear_registro36041(int id) {
    Registro36041 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
