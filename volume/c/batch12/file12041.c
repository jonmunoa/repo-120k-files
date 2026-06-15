// fichero 12041 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12041;

Registro12041 crear_registro12041(int id) {
    Registro12041 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
