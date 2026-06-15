// fichero 40365 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40365;

Registro40365 crear_registro40365(int id) {
    Registro40365 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
