// fichero 11001 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11001;

Registro11001 crear_registro11001(int id) {
    Registro11001 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
