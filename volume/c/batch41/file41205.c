// fichero 41205 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41205;

Registro41205 crear_registro41205(int id) {
    Registro41205 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
