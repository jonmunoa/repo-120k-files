// fichero 41997 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41997;

Registro41997 crear_registro41997(int id) {
    Registro41997 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
