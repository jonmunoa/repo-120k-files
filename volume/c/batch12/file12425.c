// fichero 12425 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12425;

Registro12425 crear_registro12425(int id) {
    Registro12425 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
