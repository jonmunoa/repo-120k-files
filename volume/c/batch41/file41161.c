// fichero 41161 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41161;

Registro41161 crear_registro41161(int id) {
    Registro41161 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
