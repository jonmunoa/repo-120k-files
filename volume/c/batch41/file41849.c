// fichero 41849 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41849;

Registro41849 crear_registro41849(int id) {
    Registro41849 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
