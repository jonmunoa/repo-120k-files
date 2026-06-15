// fichero 41265 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41265;

Registro41265 crear_registro41265(int id) {
    Registro41265 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
