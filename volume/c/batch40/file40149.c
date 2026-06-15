// fichero 40149 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40149;

Registro40149 crear_registro40149(int id) {
    Registro40149 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
