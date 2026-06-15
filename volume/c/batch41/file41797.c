// fichero 41797 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41797;

Registro41797 crear_registro41797(int id) {
    Registro41797 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
