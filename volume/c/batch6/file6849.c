// fichero 6849 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6849;

Registro6849 crear_registro6849(int id) {
    Registro6849 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
