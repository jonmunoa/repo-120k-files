// fichero 12613 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12613;

Registro12613 crear_registro12613(int id) {
    Registro12613 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
