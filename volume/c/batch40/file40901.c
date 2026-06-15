// fichero 40901 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40901;

Registro40901 crear_registro40901(int id) {
    Registro40901 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
